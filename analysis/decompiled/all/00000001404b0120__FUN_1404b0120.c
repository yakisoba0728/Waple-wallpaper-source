// Function: FUN_1404b0120
// Addr: 1404b0120
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0120(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  int in_EAX;
  undefined4 in_register_00000004;
  byte bVar3;
  int unaff_EBP;
  
  bVar3 = (byte)((ulonglong)param_1 >> 8);
  *(int *)(param_2 + param_1) = *(int *)(param_2 + param_1) + unaff_EBP;
  pbVar1 = (byte *)(param_1 + CONCAT44(in_register_00000004,in_EAX));
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       (*(int *)CONCAT44(in_register_00000004,in_EAX) - in_EAX) - (uint)CARRY1(bVar2,bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

