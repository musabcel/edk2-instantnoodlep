APRIORI DXE {
  #
  # PI DXE Drivers producing Architectural Protocols (EFI Services)
  #
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf

  #
  # FAT filesystem + GPT/MBR partitioning
  #
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf


    FILE DRIVER = f541d663-4a48-40aa-aabf-ff158ccae34c {
    SECTION DXE_DEPEX = Dxe/865/SmemDxe.depex
SECTION PE32 = Dxe/865/SmemDxe.efi
    SECTION UI = "SmemDxe"
  }



FILE DRIVER = 8E9BD160-B184-11DF-94E2-0800200C9A66 {
    SECTION DXE_DEPEX = Dxe/865/DALSys.depex
    SECTION PE32 = Dxe/865/DALSys.efi
    SECTION UI = "DALSys"
  }
  

  FILE DRIVER = CD823A4D-7DEC-4531-AE5D-4134FA4127B8 {
    SECTION DXE_DEPEX = Dxe/865/UsbConfigDxe.depex
    SECTION PE32 = Dxe/865/UsbConfigDxe.efi
    SECTION UI = "UsbConfigDxe"
  }    

  FILE DRIVER = 3299A266-15F0-4346-8318-716336736D3E {
    SECTION DXE_DEPEX = Dxe/865/UsbDeviceDxe.depex
    SECTION PE32 = Dxe/865/UsbDeviceDxe.efi
    SECTION UI = "UsbDeviceDxe"
   } 
   
  FILE DRIVER = 94F8A6A7-DC34-4101-88C1-99179CCEAE83 {
    SECTION DXE_DEPEX = Dxe/865/UsbfnDwc3Dxe.depex
    SECTION PE32 = Dxe/865/UsbfnDwc3Dxe.efi
    SECTION UI = "UsbfnDwc3Dxe"
  }    

  FILE DRIVER = 0A134F0E-075E-40B3-9C63-3B3906804663 {
    SECTION DXE_DEPEX = Dxe/865/UsbInitDxe.depex
    SECTION PE32 = Dxe/865/UsbInitDxe.efi
    SECTION UI = "UsbInitDxe"
  } 

  FILE DRIVER = 2D2E62CF-9ECF-43B7-8219-94E7FC713DFE {
    SECTION PE32 = Dxe/865/UsbKbDxe.efi
    SECTION UI = "UsbKbDxe"
  }


  FILE DRIVER = 5AF77F10-90DF-4E7E-8325-A17EC09D5443 {
    SECTION DXE_DEPEX = Dxe/865/UsbMsdDxe.depex
    SECTION PE32 = Dxe/865/UsbMsdDxe.efi
    SECTION UI = "UsbMsdDxe"
  }

  FILE DRIVER = 11FAED4C-B21F-4D88-8E48-C4C28A1E50DF {
    SECTION DXE_DEPEX = Dxe/865/UsbPwrCtrlDxe.depex
    SECTION PE32 = Dxe/865/UsbPwrCtrlDxe.efi
    SECTION UI = "UsbPwrCtrlDxe"
  } 
  
   FILE DRIVER = B7F50E91-A759-412C-ADE4-DCD03E7F7C28 {
    SECTION PE32 = Dxe/865/XhciDxe.efi
    SECTION UI = "XhciDxe"
  }

FILE DRIVER = BEB12BEE-F6E1-11E1-9FB8-6C626DE4AEB1 {
    SECTION DXE_DEPEX = Dxe/865/XhciPciEmulation.depex
    SECTION PE32 = Dxe/865/XhciPciEmulation.efi
    SECTION UI = "XhciPciEmulation"
  }
  


    FILE DRIVER = 8681CC5A-0DF6-441E-B4B8-E915C538F067 {
    SECTION DXE_DEPEX = Dxe/865/HWIODxeDriver.depex
    SECTION PE32 = Dxe/865/HWIODxeDriver.efi
    SECTION UI = "HWIODxeDriver"
  }

   FILE DRIVER = 10e193df-9966-44e7-b17c-59dd831e20fc {
    SECTION DXE_DEPEX = Dxe/865/ChipInfo.depex
    SECTION PE32 = Dxe/865/ChipInfo.efi
    SECTION UI = "ChipInfo"
  }

    FILE DRIVER = B105211B-BBBD-4ADD-A3B0-D1CF4A52154C {
    SECTION DXE_DEPEX = Dxe/865/PlatformInfoDxeDriver.depex
    SECTION PE32 = Dxe/865/PlatformInfoDxeDriver.efi
    SECTION UI = "PlatformInfoDxeDriver"
  }

    FILE DRIVER = 9A00771F-36D4-4DD5-8916-C48ED9B16B86 {
    SECTION DXE_DEPEX = Dxe/865/HALIOMMU.depex
    SECTION PE32 = Dxe/865/HALIOMMU.efi
    SECTION UI = "HALIOMMU"
  }


   FILE DRIVER = E43128A8-8692-42B6-8AFA-676158578D18 {
   SECTION DXE_DEPEX = Dxe/865/ULogDxe.depex
    SECTION PE32 = Dxe/865/ULogDxe.efi
    SECTION UI = "ULogDxe"
  }

    FILE DRIVER = ABA01FF8-2CCB-4E12-8B2E-CD3F4A742993 {
    SECTION DXE_DEPEX = Dxe/865/CmdDbDxe.depex
    SECTION PE32 = Dxe/865/CmdDbDxe.efi
    SECTION UI = "CmdDbDxe"
  }

    FILE DRIVER = CB29F4D1-7F37-4692-A416-93E82E219711 {
    SECTION DXE_DEPEX = Dxe/865/NpaDxe.depex
    SECTION PE32 = Dxe/865/NpaDxe.efi
  SECTION UI = "NpaDxe"
  }

    FILE DRIVER = CB29F4D1-7F37-4692-A416-93E82E219766 {
    SECTION DXE_DEPEX = Dxe/865/RpmhDxe.depex
        SECTION PE32 = Dxe/865/RpmhDxe.efi
        SECTION UI = "RpmhDxe"
  }

    FILE DRIVER = B43C22DB-6333-490C-872D-0A73439059FD {
    SECTION DXE_DEPEX = Dxe/865/PdcDxe.depex
        SECTION PE32 = Dxe/865/PdcDxe.efi
        SECTION UI = "PdcDxe"
  }


    FILE DRIVER = 4DB5DEA6-5302-4D1A-8A82-677A683B0D29 {
    SECTION DXE_DEPEX = Dxe/865/ClockDxe.depex
        SECTION PE32 = Dxe/865/ClockDxe.efi
        SECTION UI = "ClockDxe"
  }


    FILE DRIVER = 9c1eb71f-dd6c-4ed5-9f6a-5cc0ca789f16 {
     SECTION DXE_DEPEX = Dxe/865/ShmBridgeDxe.depex
        SECTION PE32 = Dxe/865/ShmBridgeDxe.efi
        SECTION UI = "ShmBridgeDxe"
  }

    FILE DRIVER = 2D7A83E3-E343-4FFB-9109-631F2EE11694 {
    SECTION DXE_DEPEX = Dxe/865/ScmDxe.depex
        SECTION PE32 = Dxe/865/ScmDxe.efi
        SECTION UI = "ScmDxe"
  }

    FILE DRIVER = 2a7b4bef-80cd-49e1-b473-374ba4d673fc {
    SECTION DXE_DEPEX = Dxe/865/SPMI.depex
    SECTION PE32 = Dxe/865/SPMI.efi
    SECTION UI = "SPMI"
  }



  FILE DRIVER = 3AE17DB7-3CC5-4B89-9304-9549211057EF {
    SECTION DXE_DEPEX = Dxe/865/ResetRuntimeDxe.depex
    SECTION PE32 = Dxe/865/ResetRuntimeDxe.efi
    SECTION UI = "ResetRuntimeDxe"
  }



   FILE DRIVER = 5776232e-082d-4b75-9a0e-fe1d13f7a5d9 {
   SECTION DXE_DEPEX = Dxe/865/PmicDxe.depex
    SECTION PE32 = Dxe/865/PmicDxe.efi
   SECTION UI = "PmicDxe"
  }



   FILE DRIVER = 5bd181db-0487-4f1a-ae73-820e165611b3 {
    SECTION DXE_DEPEX = Dxe/865/ButtonsDxe.depex
    SECTION PE32 = Dxe/865/ButtonsDxe.efi
    SECTION UI = "ButtonsDxe"
  }



  FILE DRIVER = 0d35cd8e-97ea-4f9a-96af-0f0d89f76567 {
    SECTION DXE_DEPEX = Dxe/865/UFSDxe.depex
    SECTION PE32 = Dxe/865/UFSDxe.efi
    SECTION UI = "UFSDxe"
  }



    FILE DRIVER =  7db0793a-4402-4be1-906e-d0fabad2707e{
    SECTION DXE_DEPEX = Dxe/865/DDRInfoDxe.depex
    SECTION PE32 = Dxe/865/DDRInfoDxe.efi
    SECTION UI = "DDRInfoDxe"
  }

  FILE DRIVER = 1d317734-4083-47c6-83ea-e3a42f2a6bff {
 SECTION DXE_DEPEX = Dxe/865/PILDxe.depex
    SECTION PE32 = Dxe/865/PILDxe.efi
   SECTION UI = "PILDxe"
  }

FILE DRIVER = 1B52138D-3FA3-4E50-B958-20887353F809 {
    SECTION DXE_DEPEX = Dxe/865/CPRDxe.depex
        SECTION PE32 = Dxe/865/CPRDxe.efi
        SECTION UI = "CPRDxe"
  }

  FILE DRIVER = 5A5CB8CA-9382-4e0c-B383-77FB517CD9EB {
    SECTION DXE_DEPEX = Dxe/865/AdcDxe.depex
    SECTION PE32 = Dxe/865/AdcDxe.efi
    SECTION UI = "AdcDxe"
  }
  

FILE DRIVER = 04DE8591-D2B3-4077-BBBE-B12070094EB6 {
    SECTION DXE_DEPEX = Dxe/865/I2C.depex
        SECTION PE32 = Dxe/865/I2C.efi
       SECTION UI = "I2C"
  }
  
  

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   




INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf
INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf



 




  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

}
