// Function: FUN_1404c5e8c
// Addr: 1404c5e8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5e8c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  undefined4 uVar3;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  cVar2 = (char)in_EAX + *(char *)CONCAT44(in_register_00000004,in_EAX);
  uVar3 = CONCAT31((int3)(in_EAX >> 8),cVar2);
  pcVar1 = (char *)(unaff_RSI + CONCAT44(in_register_00000004,uVar3));
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar3) + 0x24);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

