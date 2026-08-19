// Function: FUN_1404a97a0
// Addr: 1404a97a0
// Size: 1 bytes


void FUN_1404a97a0(char *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  char *pcVar4;
  char unaff_SPL;
  char *unaff_RSI;
  float10 in_ST0;
  float10 in_ST1;
  
  uVar1 = in(0xda);
  *(int *)(param_3 + (ulonglong)uVar1) = (int)in_ST0;
  uVar3 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),uRame500000021004a96);
  *(int *)(param_3 + uVar3) = (int)(in_ST1 * (float10)*(int *)(uVar3 * 2));
  uVar2 = in(0xda);
  pcVar4 = (char *)(ulonglong)CONCAT22((short)((uint)uVar2 >> 0x10),CONCAT11(0x24,(char)uVar2));
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *pcVar4 = *pcVar4 + (char)uVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

