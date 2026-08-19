// Function: FUN_1404adb40
// Addr: 1404adb40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adb40(longlong param_1,undefined8 param_2,char *param_3)

{
  byte bVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  byte bVar2;
  
  bVar2 = (byte)((ulonglong)param_1 >> 8);
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & (byte)param_1;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar2;
  uRam00000001b44fdb54 =
       uRam00000001b44fdb54 &
       CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + *param_3 + CARRY1(bVar1,bVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

