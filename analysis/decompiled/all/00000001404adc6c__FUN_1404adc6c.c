// Function: FUN_1404adc6c
// Addr: 1404adc6c
// Size: 1 bytes


void FUN_1404adc6c(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined3 uVar5;
  undefined4 uVar4;
  undefined4 in_register_00000004;
  char in_CF;
  float10 in_ST0;
  uint uVar3;
  
  uVar5 = (undefined3)((uint)in_EAX >> 8);
  cVar2 = (char)in_EAX + *(char *)CONCAT44(in_register_00000004,in_EAX) + in_CF;
  uVar3 = CONCAT31(uVar5,cVar2);
  *(int *)(ulonglong)*(uint *)(param_2 * 2) = (int)in_ST0;
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(uint *)CONCAT44(in_register_00000004,uVar3) & uVar3;
  uVar4 = CONCAT31(uVar5,cVar2);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar4) + 0x3f);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(char *)CONCAT44(in_register_00000004,uVar4) =
       *(char *)CONCAT44(in_register_00000004,uVar4) + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

