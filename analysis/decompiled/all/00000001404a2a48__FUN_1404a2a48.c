// Function: FUN_1404a2a48
// Addr: 1404a2a48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2a48(int *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  char *in_RAX;
  int unaff_EBX;
  
  in_RAX[0x5351b00] = in_RAX[0x5351b00] << 1;
  *in_RAX = *in_RAX + (char)((ulonglong)param_1 >> 8);
  *param_2 = *param_2 - (int)param_1;
  *param_1 = *param_1 + (int)param_2;
  uVar2 = (int)in_RAX + 0xc681100;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  *param_2 = *param_2 + unaff_EBX;
  bVar1 = (byte)uVar2;
  *(byte *)param_2 = (char)*param_2 + bVar1;
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 ^ bVar1;
  *(byte *)param_1 = (char)*param_1 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

