// Function: FUN_1404c539c
// Addr: 1404c539c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c539c(char *param_1,uint *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  char in_AL;
  undefined7 in_register_00000001;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RDI;
  
  uVar3 = *param_2;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x37);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *param_1 = *param_1 + in_AL;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  *(uint **)((ulonglong)((uint)&stack0x00000000 ^ uVar3) - 8) = param_2;
  pbVar2 = (byte *)((CONCAT71(in_register_00000001,in_AL) ^ 0xd) + 7);
  *pbVar2 = *pbVar2 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

