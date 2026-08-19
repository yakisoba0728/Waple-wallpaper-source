// Function: FUN_1402ed110
// Addr: 1402ed110
// Size: 294 bytes


/* WARNING: Possible PIC construction at 0x0001402ed299: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001402ed29e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

void FUN_1402ed110(ulonglong param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined8 unaff_RSI;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulonglong uVar16;
  Misc unaff_R13D;
  undefined4 unaff_000000ac;
  undefined8 uVar17;
  undefined4 uVar18;
  
  iVar2 = *param_3;
  uVar11 = param_1;
  if (((longlong)iVar2 & 4U) != 0) {
    uVar11 = (longlong)param_3[1] + param_1 & (longlong)-param_3[2];
  }
  pbVar14 = (byte *)((ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8) +
                    *(longlong *)(param_2 + 8));
  bVar1 = pbVar14[3];
  if ((*pbVar14 & 7) < 3) {
    if ((bVar1 & 0xf) != 0) {
LAB_1402ed26d:
      uVar16 = (ulonglong)bVar1 & 0xfffffffffffffff0;
      goto LAB_1402ed271;
    }
  }
  else if ((bVar1 & 0x1f) != 0) {
    uVar16 = 0;
    pbVar14 = pbVar14 + (ulonglong)(bVar1 & 0x1f) + 4;
    uVar10 = uVar16;
    pbVar15 = pbVar14;
    if (bVar1 >> 5 != 0) {
      do {
        pbVar14 = pbVar15 + 3;
        if (*pbVar15 >> 3 != 0) {
          pbVar14 = pbVar15 + (ulonglong)(uint)(*pbVar15 >> 3) + 6;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        pbVar15 = pbVar14;
      } while (uVar9 < bVar1 >> 5);
    }
    uVar10 = uVar16;
    if ((bVar1 & 0x1f) != 0) {
      do {
        bVar5 = *pbVar14;
        bVar12 = bVar5;
        if (((3 < bVar5) && (bVar12 = bVar5 & 0xf, 2 < (byte)(bVar12 - 8))) &&
           (bVar12 = bVar5 & 7, 3 < (byte)(bVar12 - 4))) {
LAB_1402ed218:
          if ((bVar5 & 0x3f) == 0x20) {
            bVar5 = 0x20;
            goto LAB_1402ed227;
          }
code_r0x0001402ed299:
          goto code_r0x0001402ed0e0;
        }
        if (bVar12 == 0) {
          bVar1 = pbVar14[1];
          goto LAB_1402ed26d;
        }
        if (3 < bVar5) {
          bVar12 = bVar5 & 0xf;
          if ((2 < (byte)((bVar5 & 0xf) - 8)) && (bVar12 = bVar5 & 7, 3 < (byte)((bVar5 & 7) - 4)))
          goto LAB_1402ed218;
          bVar5 = bVar12;
          if (0x20 < bVar5) goto code_r0x0001402ed299;
        }
LAB_1402ed227:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((&UNWIND_INFO_1402ed2a8.field_0xc)[bVar5]) {
        case 0:
          lVar8 = 2;
          break;
        case 1:
          lVar8 = 5;
          break;
        case 2:
          lVar8 = 3;
          break;
        case 3:
          lVar8 = 1;
          break;
        case 4:
          goto code_r0x0001402ed299;
        case 5:
          pcVar13 = "core_tray_pause";
          if ((param_1 & 1) != 0) {
            pcVar13 = (char *)0x40474c10;
          }
          FUN_140097710(&DAT_1404e6e50,0x1400002e8,pcVar13);
          pcVar13 = "core_tray_mute";
          if ((param_1 >> 6 & 1) != 0) {
            pcVar13 = "core_tray_unmute";
          }
          FUN_140097710(&DAT_1404e6e50,0x140000138,pcVar13);
          IMAGE_DOS_HEADER_140000000.e_program._60_4_ = unaff_000000ac;
          IMAGE_DOS_HEADER_140000000.e_program._56_4_ = unaff_R13D.PhysicalAddress;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.LoaderFlags = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.NumberOfRvaAndSizes = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0].VirtualAddress = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[0].Size = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[1].VirtualAddress = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[1].Size = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[2].VirtualAddress = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[2].Size = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[3].VirtualAddress = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[3].Size = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[4].VirtualAddress = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[4].Size = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[5].VirtualAddress = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[5].Size = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[6].VirtualAddress = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[6].Size = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x28] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x29] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x2a] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x2b] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x2c] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x2d] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x2e] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x2f] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x30] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x31] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x32] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x33] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x34] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x35] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x36] = 0;
          IMAGE_DOS_HEADER_140000000.e_program[0x37] = 0;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.SizeOfHeapCommit =
               CONCAT44(unaff_000000ac,unaff_R13D.PhysicalAddress);
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.SizeOfHeapReserve._0_4_ = 0x50;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.SizeOfHeapReserve._4_4_ = 0xc0;
          cVar4 = FUN_140015250(10,0,0);
          if ((cVar4 != '\0') &&
             (iVar6 = (*DAT_1404260e8)(0xffffffff80000001,
                                       L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize"
                                       ,0,0xf003f), iVar6 == 0)) {
            uRam0000000140000788 = 4;
            iVar6 = (*_UNK_140426110)(unaff_RSI,L"SystemUsesLightTheme",0,0);
            if ((iVar6 == 0) &&
               ((int)IMAGE_NT_HEADERS64_140000110.OptionalHeader.SizeOfStackCommit != iVar2)) {
              uVar17 = 0x33;
              (*DAT_1404260d8)(unaff_RSI);
              goto code_r0x00014002031a;
            }
            (*DAT_1404260d8)(unaff_RSI);
          }
          uVar17 = 0xcc;
code_r0x00014002031a:
          uVar7 = (*DAT_140426aa0)(DAT_1404e8c50,(byte)param_1 & 1 | 0x96,1,0x10);
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[6] =
               (IMAGE_DATA_DIRECTORY)func_0x00014001cbf0(uVar7,uVar17);
          uVar18 = FUN_1400303a0(0x140000068,0x1400001c8);
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[4].VirtualAddress = 0x400002e8;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[4].Size = 1;
          if (7 < (ulonglong)IMAGE_SECTION_HEADER_1400002e0._32_8_) {
            IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[4] =
                 (IMAGE_DATA_DIRECTORY)IMAGE_SECTION_HEADER_1400002e0._8_8_;
          }
          (*DAT_140426a38)(uVar18,0x9c56,0,0x140000180);
          (*DAT_140426ab0)(uVar7);
          uVar7 = (*DAT_140426aa0)(DAT_1404e8c50,(byte)(param_1 >> 6) & 1 | 0x9a,1,0x10);
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[6] =
               (IMAGE_DATA_DIRECTORY)func_0x00014001cbf0(uVar7,uVar17);
          uVar18 = FUN_1400303a0(0x140000068,0x1400001c8);
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[4].VirtualAddress = 0x40000138;
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[4].Size = 1;
          if (7 < (ulonglong)IMAGE_NT_HEADERS64_140000110.OptionalHeader._40_8_) {
            IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[4] =
                 (IMAGE_DATA_DIRECTORY)IMAGE_NT_HEADERS64_140000110.OptionalHeader._16_8_;
          }
          (*DAT_140426a38)(uVar18,0x9c5f,0,0x140000180);
          (*DAT_140426ab0)(uVar7);
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.SizeOfHeapReserve._4_4_ = 0x80;
          uVar7 = (*DAT_140426aa0)(DAT_1404e8c50,0x98,1,0x10);
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[6] =
               (IMAGE_DATA_DIRECTORY)func_0x00014001cbf0(uVar7,uVar17);
          uVar18 = FUN_1400303a0(0x140000068,0x1400001c8);
          (*DAT_140426a38)(uVar18,0x9c4d,0,0x140000180);
          (*DAT_140426ab0)(uVar7);
          uVar7 = (*DAT_140426aa0)(DAT_1404e8c50,0x99,1,0x10);
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[6] =
               (IMAGE_DATA_DIRECTORY)func_0x00014001cbf0(uVar7,uVar17);
          uVar18 = FUN_1400303a0(0x140000068,0x1400001c8);
          (*DAT_140426a38)(uVar18,0x9c5c,0,0x140000180);
          (*DAT_140426ab0)(uVar7);
          uVar7 = (*DAT_140426aa0)(DAT_1404e8c50,0x9c,1,0x10);
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[6] =
               (IMAGE_DATA_DIRECTORY)func_0x00014001cbf0(uVar7,uVar17);
          uVar18 = FUN_1400303a0(0x140000068,0x1400001c8);
          (*DAT_140426a38)(uVar18,0x9c59,0,0x140000180);
          (*DAT_140426ab0)(uVar7);
          uVar7 = (*DAT_140426aa0)(DAT_1404e8c50,0x9d,1,0x10);
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[6] =
               (IMAGE_DATA_DIRECTORY)func_0x00014001cbf0(uVar7,uVar17);
          uVar18 = FUN_1400303a0(0x140000068,0x1400001c8);
          (*DAT_140426a38)(uVar18,0x9c61,0,0x140000180);
          (*DAT_140426ab0)(uVar7);
          uVar7 = (*DAT_140426aa0)(DAT_1404e8c50,0x9f,1,0x10);
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[6] =
               (IMAGE_DATA_DIRECTORY)func_0x00014001cbf0(uVar7,uVar17);
          uVar18 = FUN_1400303a0(0x140000068,0x1400001c8);
          (*DAT_140426a38)(uVar18,0x9c4a,0,0x140000180);
          (*DAT_140426ab0)(uVar7);
          uVar7 = (*DAT_140426aa0)(DAT_1404e8c50,0x9e,1,0x10);
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[6] =
               (IMAGE_DATA_DIRECTORY)func_0x00014001cbf0(uVar7,uVar17);
          uVar18 = FUN_1400303a0(0x140000068,0x1400001c8);
          (*DAT_140426a38)(uVar18,0x9c52,0,0x140000180);
          (*DAT_140426ab0)(uVar7);
          uVar7 = (*DAT_140426aa0)(DAT_1404e8c50,0xa0,1,0x10);
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[6] =
               (IMAGE_DATA_DIRECTORY)func_0x00014001cbf0(uVar7,uVar17);
          uVar18 = FUN_1400303a0(0x140000068,0x1400001c8);
          (*DAT_140426a38)(uVar18,0x9c5b,0,0x140000180);
          (*DAT_140426ab0)(uVar7);
          uVar7 = (*DAT_140426aa0)(DAT_1404e8c50,0xa1,1,0x10);
          IMAGE_NT_HEADERS64_140000110.OptionalHeader.DataDirectory[6] =
               (IMAGE_DATA_DIRECTORY)func_0x00014001cbf0(uVar7,uVar17);
          uVar18 = FUN_1400303a0(0x140000068,0x1400001c8);
          (*DAT_140426a38)(uVar18,0x9c53,0,0x140000180);
          (*DAT_140426ab0)(uVar7);
          func_0x000140084ea0(&IMAGE_SECTION_HEADER_140000308,0);
          func_0x000140084ea0(&IMAGE_SECTION_HEADER_140000240,0);
          IMAGE_SECTION_HEADER_140000290.PointerToRelocations =
               CONCAT31(IMAGE_SECTION_HEADER_140000290.PointerToRelocations._1_3_,(char)iVar2);
          IMAGE_SECTION_HEADER_140000290.PointerToRelocations =
               IMAGE_SECTION_HEADER_140000290.PointerToRelocations & 0xfffffeff;
          IMAGE_SECTION_HEADER_140000290.NumberOfRelocations = 0;
          IMAGE_SECTION_HEADER_140000290.NumberOfLinenumbers = 0;
          IMAGE_SECTION_HEADER_140000290.Characteristics = 0;
          IMAGE_SECTION_HEADER_1400002b8.Name[0] = '\0';
          IMAGE_SECTION_HEADER_1400002b8.Name[1] = '\0';
          IMAGE_SECTION_HEADER_1400002b8.Name[2] = '\0';
          IMAGE_SECTION_HEADER_1400002b8.Name[3] = '\0';
          IMAGE_SECTION_HEADER_1400002b8.Name[4] = '\0';
          IMAGE_SECTION_HEADER_1400002b8.Name[5] = '\0';
          IMAGE_SECTION_HEADER_1400002b8.Name[6] = '\0';
          IMAGE_SECTION_HEADER_1400002b8.Name[7] = '\0';
          IMAGE_SECTION_HEADER_1400002b8.VirtualAddress = unaff_000000ac;
          IMAGE_SECTION_HEADER_1400002b8.Misc.PhysicalAddress = unaff_R13D.PhysicalAddress;
                    /* WARNING: Subroutine does not return */
          FUN_140086eb0(&DAT_1404df6b8,"general","");
        }
        pbVar14 = pbVar14 + lVar8;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < (bVar1 & 0x1f));
    }
    goto LAB_1402ed271;
  }
  uVar16 = 0;
LAB_1402ed271:
  uVar11 = uVar16 + param_1 ^ *(ulonglong *)(((longlong)iVar2 & 0xfffffffffffffff8U) + uVar11);
  if ((uVar11 == DAT_1404dc110) && ((short)(uVar11 >> 0x30) == 0)) {
    return;
  }
code_r0x0001402ed0e0:
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(2);
  return;
}

