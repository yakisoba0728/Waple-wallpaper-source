// Function: FUN_1404a3028
// Addr: 1404a3028
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3028(longlong param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char cVar6;
  longlong unaff_RBX;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  char *unaff_RSI;
  uint uVar5;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,in_EAX) + -0x4f69fffb);
  *pbVar1 = *pbVar1 ^ 5;
  *unaff_RSI = *unaff_RSI + cVar6;
  bVar3 = *param_4;
  *param_4 = *param_4 + unaff_SPL;
  cVar4 = (char)in_EAX + '\x06' + CARRY1(bVar3,unaff_SPL);
  uVar5 = CONCAT31((int3)((uint)in_EAX >> 8),cVar4);
  pcVar2 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)unaff_RSI * 2);
  *pcVar2 = *pcVar2 + (char)param_2;
  *(uint *)CONCAT44(in_register_00000004,uVar5) =
       *(uint *)CONCAT44(in_register_00000004,uVar5) | uVar5;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + cVar6;
  *(char *)CONCAT71(unaff_00000021,unaff_SPL) = *(char *)CONCAT71(unaff_00000021,unaff_SPL) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

