// Function: FUN_1404a2a18
// Addr: 1404a2a18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2a18(longlong param_1,int *param_2)

{
  char *pcVar1;
  uint in_EAX;
  uint uVar2;
  undefined4 in_register_00000004;
  char cVar3;
  
  cVar3 = (char)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x5351b00);
  *pcVar1 = *pcVar1 << 1;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar3;
  *param_2 = *param_2 - (int)param_1;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  uVar2 = CONCAT31((int3)(in_EAX >> 8),(char)in_EAX + *(char *)CONCAT44(in_register_00000004,in_EAX)
                  );
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar2) + param_1);
  *pcVar1 = *pcVar1 + (char)param_2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar2) + 0x5351b00);
  *pcVar1 = *pcVar1 << 1;
  *(char *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + cVar3;
  *param_2 = *param_2 - (int)param_1;
  *(uint *)CONCAT44(in_register_00000004,uVar2) =
       *(uint *)CONCAT44(in_register_00000004,uVar2) & uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

