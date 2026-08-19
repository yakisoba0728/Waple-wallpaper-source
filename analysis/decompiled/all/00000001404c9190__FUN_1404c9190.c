// Function: FUN_1404c9190
// Addr: 1404c9190
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9190(longlong param_1,undefined8 param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined4 in_register_00000004;
  char cVar2;
  longlong unaff_RBX;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + cVar2;
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + cVar2);
  *(uint *)CONCAT44(in_register_00000004,uVar1) =
       *(uint *)CONCAT44(in_register_00000004,uVar1) ^ uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

