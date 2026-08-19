// Function: FUN_1404a5750
// Addr: 1404a5750
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5750(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  char *unaff_RSI;
  undefined4 uVar3;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar2 = (char)in_EAX + *(char *)CONCAT44(in_register_00000004,in_EAX);
  uVar3 = CONCAT31((int3)(in_EAX >> 8),bVar2);
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
  puVar1 = (undefined1 *)(CONCAT44(in_register_00000004,uVar3) + param_1);
  *puVar1 = *puVar1;
  *(byte *)CONCAT44(in_register_00000004,uVar3) =
       *(byte *)CONCAT44(in_register_00000004,uVar3) | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

