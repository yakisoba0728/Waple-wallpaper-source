// Function: FUN_1404c5d58
// Addr: 1404c5d58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5d58(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  uint in_EAX;
  undefined4 uVar2;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  uVar2 = CONCAT31((int3)(in_EAX >> 8),(char)in_EAX + *(char *)CONCAT44(in_register_00000004,in_EAX)
                  );
  pcVar1 = (char *)(unaff_RSI + CONCAT44(in_register_00000004,uVar2));
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar2) + 2);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

