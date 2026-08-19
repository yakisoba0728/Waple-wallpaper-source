// Function: FUN_1404c5a84
// Addr: 1404c5a84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5a84(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  int unaff_EBX;
  int unaff_EDI;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + unaff_EBX;
  uVar2 = *(uint *)CONCAT44(in_register_00000004,in_EAX);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  piVar1 = (int *)(CONCAT44(in_register_00000004,in_EAX) + param_1);
  *piVar1 = *piVar1 + unaff_EDI;
  (&stack0x00000000)
  [CONCAT71((int7)((ulonglong)param_2 >> 8),((char)param_2 - (char)in_EAX) - CARRY4(uVar2,in_EAX)) *
   2] = (&stack0x00000000)
        [CONCAT71((int7)((ulonglong)param_2 >> 8),
                  ((char)param_2 - (char)in_EAX) - CARRY4(uVar2,in_EAX)) * 2] +
        (char)((uint)unaff_EBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

