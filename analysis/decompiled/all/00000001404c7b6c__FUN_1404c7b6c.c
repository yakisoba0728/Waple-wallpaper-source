// Function: FUN_1404c7b6c
// Addr: 1404c7b6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7b6c(char *param_1,longlong param_2,char param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  uint *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  undefined4 *unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar3 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar3;
  *(char *)(unaff_RBP + 0x30) = *(char *)(unaff_RBP + 0x30) + (char)((ulonglong)param_1 >> 8);
  *(byte *)in_RAX = (byte)*in_RAX + unaff_BL;
  pbVar1 = (byte *)(unaff_RDI + 1);
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  *(byte *)in_RAX = (byte)*in_RAX ^ bVar3;
  if ((byte)*in_RAX != 0) {
    *param_1 = *param_1 + param_3;
    (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI)] =
         (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI)] + (char)param_2;
    LocalDescriptorTableRegister(*(undefined2 *)(param_2 * 3));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)CONCAT71(unaff_00000019,unaff_BL) = *(int *)CONCAT71(unaff_00000019,unaff_BL) + unaff_ESI;
  cRam000000014a2c87e1 = cRam000000014a2c87e1 + (char)param_1;
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> 1;
  *(byte *)((longlong)in_RAX + 0x21000001) = *(byte *)((longlong)in_RAX + 0x21000001) + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

