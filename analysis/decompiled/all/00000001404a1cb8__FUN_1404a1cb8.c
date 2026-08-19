// Function: FUN_1404a1cb8
// Addr: 1404a1cb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1cb8(byte *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong in_RAX;
  char unaff_BL;
  uint unaff_EBP;
  int *unaff_RSI;
  
  *(char *)(in_RAX + 0x1e) = *(char *)(in_RAX + 0x1e) + (char)((ulonglong)param_1 >> 8);
  *(char *)(in_RAX + 0x68) = *(char *)(in_RAX + 0x68) + (char)((ulonglong)param_2 >> 8);
  *(uint *)(&stack0x00000000 + in_RAX) = *(uint *)(&stack0x00000000 + in_RAX) | unaff_EBP;
  bVar1 = *param_1;
  *param_1 = *param_1 + (byte)in_RAX;
  bVar2 = *param_1;
  *param_2 = *param_2 + unaff_BL;
  *param_2 = *param_2 + unaff_BL;
  *unaff_RSI = *unaff_RSI + (int)param_2;
  *(byte *)unaff_RSI = (char)*unaff_RSI + (((char)param_1 - bVar2) - CARRY1(bVar1,(byte)in_RAX));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

