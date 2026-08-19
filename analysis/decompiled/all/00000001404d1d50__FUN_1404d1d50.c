// Function: FUN_1404d1d50
// Addr: 1404d1d50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1d50(char *param_1,longlong param_2)

{
  uint *in_RAX;
  char *pcVar1;
  char cVar2;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RDI;
  
  cVar2 = (char)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(byte *)(param_2 + -0x4d7bffcb) =
       *(byte *)(param_2 + -0x4d7bffcb) & (byte)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + unaff_BL;
  *(int *)CONCAT71(unaff_00000019,unaff_BL) =
       *(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1;
  *unaff_RDI = *unaff_RDI + cVar2;
  *unaff_RDI = *unaff_RDI + cVar2;
  pcVar1 = (char *)(ulonglong)(((uint)in_RAX ^ 0x4a16d8d1) + (int)param_1);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

