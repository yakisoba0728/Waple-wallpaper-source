// Function: FUN_1404a88b4
// Addr: 1404a88b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a88b4(undefined8 param_1,undefined4 *param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 in_EAX;
  uint uVar6;
  undefined4 in_register_00000004;
  undefined4 uVar7;
  
  cVar5 = cRambc000b9ca7000b9c;
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar6 = CONCAT31((int3)((uint)in_EAX >> 8),cRambc000b9ca7000b9c);
  LOCK();
  uVar3 = *param_2;
  *param_2 = (int)param_1;
  UNLOCK();
  *(uint *)CONCAT44(in_register_00000004,uVar6) =
       *(uint *)CONCAT44(in_register_00000004,uVar6) & uVar6;
  *(char *)CONCAT44(in_register_00000004,uVar6) =
       *(char *)CONCAT44(in_register_00000004,uVar6) + cVar5;
  LOCK();
  uVar4 = *param_2;
  *param_2 = uVar3;
  UNLOCK();
  puVar1 = (uint *)(CONCAT44(uVar7,uVar4) + 10);
  *puVar1 = *puVar1 & (uint)param_2;
  pcVar2 = (char *)(CONCAT44(uVar7,uVar4) + 100);
  *pcVar2 = *pcVar2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

