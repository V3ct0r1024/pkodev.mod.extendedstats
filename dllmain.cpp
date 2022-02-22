#include <windows.h>
#include <detours.h>

#include <cstdio>
#include <vector>
#include <string>
#include <fstream>

#include "loader.h"

namespace pkodev
{
    namespace address
    {
        // Game.exe 0 (1222073761)
        namespace GAME_13X_0
        {
            // void CStateMgr::_evtMainShow(CGuiData *pSender)
            const unsigned int CStateMgr___evtMainShow = 0x0047F690;

            // void CStateMgr::RefreshStateFrm()
            const unsigned int CStateMgr__RefreshStateFrm = 0x0047F030;

            // CCompent* CForm::Find( const char* str )
            const unsigned int CForm__Find = 0x00494040;

            // void CLabel::SetCaption( const char * str )
            const unsigned int CLabel__SetCaption = 0x0042B1A0;

            // CCharacter* CBoatMgr::_pHuman
            const unsigned int CBoatMgr___pHuman = 0x00668B6C;
        }

        // Game.exe 1 (1243412597)
        namespace GAME_13X_1
        {
            // void CStateMgr::_evtMainShow(CGuiData *pSender)
            const unsigned int CStateMgr___evtMainShow = 0x0047F750;

            // void CStateMgr::RefreshStateFrm()
            const unsigned int CStateMgr__RefreshStateFrm = 0x0047F0F0;

            // CCompent* CForm::Find( const char* str )
            const unsigned int CForm__Find = 0x00494150;

            // void CLabel::SetCaption( const char * str )
            const unsigned int CLabel__SetCaption = 0x0042B1A0;

            // CCharacter* CBoatMgr::_pHuman
            const unsigned int CBoatMgr___pHuman = 0x00668B6C;
        }

        // Game.exe 2 (1252912474)
        namespace GAME_13X_2
        {
            // void CStateMgr::_evtMainShow(CGuiData *pSender)
            const unsigned int CStateMgr___evtMainShow = 0x0047F7F0;

            // void CStateMgr::RefreshStateFrm()
            const unsigned int CStateMgr__RefreshStateFrm = 0x0047F190;

            // CCompent* CForm::Find( const char* str )
            const unsigned int CForm__Find = 0x004941F0;

            // void CLabel::SetCaption( const char * str )
            const unsigned int CLabel__SetCaption = 0x0042B1A0;

            // CCharacter* CBoatMgr::_pHuman
            const unsigned int CBoatMgr___pHuman = 0x00668B6C;
        }

        // Game.exe 3 (1244511158)
        namespace GAME_13X_3
        {
            // void CStateMgr::_evtMainShow(CGuiData *pSender)
            const unsigned int CStateMgr___evtMainShow = 0x0047F7E0;

            // void CStateMgr::RefreshStateFrm()
            const unsigned int CStateMgr__RefreshStateFrm = 0x0047F180;

            // CCompent* CForm::Find( const char* str )
            const unsigned int CForm__Find = 0x004941E0;

            // void CLabel::SetCaption( const char * str )
            const unsigned int CLabel__SetCaption = 0x0042B1A0;

            // CCharacter* CBoatMgr::_pHuman
            const unsigned int CBoatMgr___pHuman = 0x00668B6C;
        }

        // Game.exe 4 (1585009030)
        namespace GAME_13X_4
        {
            // void CStateMgr::_evtMainShow(CGuiData *pSender)
            const unsigned int CStateMgr___evtMainShow = 0x0047F960;

            // void CStateMgr::RefreshStateFrm()
            const unsigned int CStateMgr__RefreshStateFrm = 0x0047F300;

            // CCompent* CForm::Find( const char* str )
            const unsigned int CForm__Find = 0x004943F0;

            // void CLabel::SetCaption( const char * str )
            const unsigned int CLabel__SetCaption = 0x0042B2D0;

            // CCharacter* CBoatMgr::_pHuman
            const unsigned int CBoatMgr___pHuman = 0x00668B84;
        }

        // Game.exe 5 (1207214236)
        namespace GAME_13X_5
        {
            // void CStateMgr::_evtMainShow(CGuiData *pSender)
            const unsigned int CStateMgr___evtMainShow = 0x0047F360;

            // void CStateMgr::RefreshStateFrm()
            const unsigned int CStateMgr__RefreshStateFrm = 0x0047ED00;

            // CCompent* CForm::Find( const char* str )
            const unsigned int CForm__Find = 0x00493E40;

            // void CLabel::SetCaption( const char * str )
            const unsigned int CLabel__SetCaption = 0x0042B190;

            // CCharacter* CBoatMgr::_pHuman
            const unsigned int CBoatMgr___pHuman = 0x00668B74;
        }
    }

    namespace pointer
    {
        // void CStateMgr::_evtMainShow(CGuiData *pSender)
        typedef void(__cdecl* CStateMgr___evtMainShow__Ptr)(void*);
        CStateMgr___evtMainShow__Ptr CStateMgr___evtMainShow = (CStateMgr___evtMainShow__Ptr)(void*)(address::MOD_EXE_VERSION::CStateMgr___evtMainShow);

        // void CStateMgr::RefreshStateFrm()
        typedef void(__cdecl* CStateMgr__RefreshStateFrm__Ptr)(void*);
        CStateMgr__RefreshStateFrm__Ptr CStateMgr__RefreshStateFrm = (CStateMgr__RefreshStateFrm__Ptr)(void*)(address::MOD_EXE_VERSION::CStateMgr__RefreshStateFrm);

        // CCompent* CForm::Find( const char* str )
        typedef void* (__thiscall* CForm__Find__Ptr)(void*, const char*);
        CForm__Find__Ptr CForm__Find = (CForm__Find__Ptr)(void*)(address::MOD_EXE_VERSION::CForm__Find);

        // void CLabel::SetCaption( const char * str )
        typedef void(__thiscall* CLabel__SetCaption__Ptr)(void*, const char*);
        CLabel__SetCaption__Ptr CLabel__SetCaption = (CLabel__SetCaption__Ptr)(void*)(address::MOD_EXE_VERSION::CLabel__SetCaption);
    }

    namespace hook
    {
        // void CStateMgr::_evtMainShow(CGuiData *pSender)
        void __cdecl CStateMgr___evtMainShow(void* pSender);

        // void CStateMgr::RefreshStateFrm()
        void __fastcall CStateMgr__RefreshStateFrm(void* This, void* NotUsed);
    }

    // Maximum character's attributes amount
    const unsigned int MAX_ATTR_CLIENT{ 74 };

    // Custom label data
    struct custom_label
    {
        // Name
        std::string name;

        // Attribute ID
        unsigned int attr_id;

        // Pointer to the label in Game.exe memory
        void* ptr;

        // Initialization flag
        bool init;

        // Constructor
        custom_label(const std::string& name_, unsigned int attr_id_) :
            name(name_),
            attr_id(attr_id_),
            ptr(nullptr),
            init(false)
        {

        }
    };

    // Custom character's attributes labels list
    std::vector<custom_label> labels;
}

// Load text labels from config file
void load_custom_labels(const std::string& cfg_path, std::vector<pkodev::custom_label>& labels);

// Entry point
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    // Nothing to do . . .
    return TRUE;
}

// Get mod information
void GetModInformation(mod_info& info)
{
    strcpy_s(info.name, TOSTRING(MOD_NAME));
    strcpy_s(info.version, TOSTRING(MOD_VERSION));
    strcpy_s(info.author, TOSTRING(MOD_AUTHOR));
    info.exe_version = MOD_EXE_VERSION;
}

// Start the mod
void Start(const char* path)
{
    // Build path to the config file
    char buf[MAX_PATH]{ 0x00 };
    sprintf_s(buf, sizeof(buf), "%s\\%s.cfg", path, TOSTRING(MOD_NAME));

    // Load custom labels list from the config file
    load_custom_labels(buf, pkodev::labels);

    // Enable hooks
    DetourRestoreAfterWith();
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)pkodev::pointer::CStateMgr___evtMainShow, pkodev::hook::CStateMgr___evtMainShow);
    DetourAttach(&(PVOID&)pkodev::pointer::CStateMgr__RefreshStateFrm, pkodev::hook::CStateMgr__RefreshStateFrm);
    DetourTransactionCommit();
}

// Stop the mod
void Stop()
{
    // Disable hooks
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourDetach(&(PVOID&)pkodev::pointer::CStateMgr___evtMainShow, pkodev::hook::CStateMgr___evtMainShow);
    DetourDetach(&(PVOID&)pkodev::pointer::CStateMgr__RefreshStateFrm, pkodev::hook::CStateMgr__RefreshStateFrm);
    DetourTransactionCommit();
}

// void CStateMgr::_evtMainShow(CGuiData *pSender)
void __cdecl pkodev::hook::CStateMgr___evtMainShow(void* pSender)
{
    // Get pointers to the labels
    for ( custom_label& label : pkodev::labels )
    {
        // Check initialization flag
        if ( label.init == false )
        {
            // Search for the label
            label.ptr = pkodev::pointer::CForm__Find(pSender, label.name.c_str());

            // Set initialization flag
            label.init = true;
        }
    }

    // Call original CStateMgr___evtMainShow() function
    pkodev::pointer::CStateMgr___evtMainShow(pSender);
}

// void CStateMgr::RefreshStateFrm()
void __fastcall pkodev::hook::CStateMgr__RefreshStateFrm(void* This, void* NotUsed)
{
    // Call original function CStateMgr::RefreshStateFrm()
    pkodev::pointer::CStateMgr__RefreshStateFrm(This);

    // Get pointer to the main character
    // CCharacter* pCha = g_stUIBoat.GetHuman();
    void* pCha = reinterpret_cast<void*>(
        *reinterpret_cast<unsigned int*>(pkodev::address::MOD_EXE_VERSION::CBoatMgr___pHuman)
    );

    if (pCha == nullptr)
    {
        // Exit from the hook
        return;
    }

    // Get offset to the attribute
    auto attr_get = [&pCha](unsigned int id) -> unsigned int
    {
        return *reinterpret_cast<unsigned int*>(
            (0xD0 + 4 * id + reinterpret_cast<unsigned int>(pCha))
        );
    };

    // Buffer for labels captions
    static char buf[16]{ 0x00 };

    // Update custom labels
    for ( const custom_label& label : pkodev::labels )
    {
        // Check pointer to the label
        if ( label.ptr != nullptr )
        {
            // Update the label
            sprintf_s(buf, sizeof(buf), "%d", attr_get(label.attr_id));
            pkodev::pointer::CLabel__SetCaption(label.ptr, buf);
        }
    }
}

// Load text labels from config file
void load_custom_labels(const std::string& cfg_path, 
    std::vector<pkodev::custom_label>& labels)
{
    // Clear old list
    labels.clear();

    // Open the file
    std::ifstream file(cfg_path, std::ifstream::in);

    // Check that file is open
    if ( file.is_open() == false )
    {
        // Can't open the file
        return;
    }

    // Current line that read from the file
    std::string line{ "" };

    // Read lines from file
    while ( getline(file, line) )
    {
        // Remove spaces from line
        line.erase( std::remove_if(line.begin(), line.end(), isspace), line.end() );

        // Check that line is not empty
        if ( line.empty() == true )
        {
            // Skip line
            continue;
        }

        // Search for symbol '='
        const std::size_t pos = line.find('=');

        // Check that the symbol is not found
        if ( pos == std::string::npos )
        {
            // Skip the line
            continue;
        }

        // Get ATTR ID
        unsigned int attr_id = 0;
        try
        {
            // Trying convert std::string to unsigned int
            attr_id = std::stoul(
                line.substr(pos + 1, line.length() - pos)
            );
        }
        catch (...)
        {
            // Conversion error
            continue;
        }

        // Check attr ID
        if ( attr_id >= pkodev::MAX_ATTR_CLIENT )
        {
            // Incorrect ID
            continue;
        }

        // Get label name
        const std::string label = line.substr(0, pos);

        // Search label name in the list of labels
        auto it = std::find_if(labels.begin(), labels.end(),
            [&label](const pkodev::custom_label& l) { return (l.name == label); }
        );

        // Check that the label name is not found in the list
        if ( it != labels.end() )
        {
            // Update label attrbiute ID
            it->attr_id = attr_id;
        }
        else
        {
            // Add label in the list
            labels.push_back({ label, attr_id });
        }
    }

    // Close the file
    file.close();
}