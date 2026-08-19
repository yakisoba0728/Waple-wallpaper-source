// Function: FUN_1404d4260
// Addr: 1404d4260
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4260(int *param_1,char param_2,longlong param_3)

{
  int in_EAX;
  byte *pbVar1;
  char unaff_R13B;
  byte in_CF;
  
  *param_1 = (*param_1 - (int)param_1) - (uint)in_CF;
  pbVar1 = (byte *)(ulonglong)(in_EAX + 0x5420900U);
  if (!SCARRY4(in_EAX,0x5420900)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar1 = *pbVar1 ^ (byte)(in_EAX + 0x5420900U);
  pbVar1[-0x4a] = pbVar1[-0x4a] + param_2;
  *(char *)(param_3 + 0x31) = *(char *)(param_3 + 0x31) + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

