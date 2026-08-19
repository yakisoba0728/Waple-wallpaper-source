// Function: FUN_1404ab5e4
// Addr: 1404ab5e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab5e4(longlong param_1,uint *param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong in_RAX;
  byte bVar3;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  *(char *)((longlong)param_2 + param_1) = *(char *)((longlong)param_2 + param_1) + bVar3;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)((ulonglong)in_RAX >> 8);
  *(char *)(in_RAX + (longlong)param_2) = *(char *)(in_RAX + (longlong)param_2) + bVar3;
  pbVar1 = (byte *)(in_RAX + 0x13);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  TaskRegister(*(undefined2 *)(unaff_RDI + -0x37fff0ed));
  *(char *)param_2 = (char)*param_2 + (char)param_1 + CARRY1(bVar2,bVar3);
  *param_2 = *param_2 & (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

