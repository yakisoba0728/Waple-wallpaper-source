// Function: FUN_1404cbf30
// Addr: 1404cbf30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbf47) overlaps instruction at (ram,0x0001404cbf46)
    */

void FUN_1404cbf30(char *param_1,char *param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  byte *pbVar2;
  char unaff_BL;
  char *unaff_RDI;
  
  uVar1 = (int)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                        CONCAT11((byte)((ulonglong)in_RAX >> 8) ^
                                                 (byte)((ulonglong)param_2 >> 8),(char)in_RAX)) >> 8
                              ),(char)in_RAX + '\x1c') + 0x7c42800;
  pbVar2 = (byte *)(ulonglong)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  if (*param_1 == '\0') {
    *param_2 = *param_2 + (char)param_2;
    pbVar2 = (byte *)((ulonglong)uVar1 ^ 0xf);
  }
  cRam00000001594cc8a9 = cRam00000001594cc8a9 + unaff_BL;
  bRam5409000409010000 = (byte)pbVar2 | *pbVar2;
  *unaff_RDI = *unaff_RDI + bRam5409000409010000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

