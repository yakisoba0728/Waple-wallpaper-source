// Function: FUN_1404c4540
// Addr: 1404c4540
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4540(char *param_1)

{
  byte *pbVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined4 uVar3;
  
  cVar2 = (char)in_EAX + *(char *)CONCAT44(in_register_00000004,in_EAX);
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),cVar2);
  *(char *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + cVar2;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,uVar3) + CONCAT44(in_register_00000004,uVar3));
  *pbVar1 = *pbVar1 >> 1;
  *(char *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + cVar2;
  param_1[-0x52ffd330] = param_1[-0x52ffd330] + (char)param_1;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,uVar3) + CONCAT44(in_register_00000004,uVar3));
  *pbVar1 = *pbVar1 >> 1;
  *(char *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + cVar2;
  *param_1 = *param_1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

