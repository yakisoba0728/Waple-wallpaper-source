// Function: FUN_1404d1568
// Addr: 1404d1568
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1568(longlong param_1,int *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte in_AL;
  undefined7 in_register_00000001;
  byte bVar5;
  uint *unaff_RBX;
  int unaff_ESI;
  byte in_CF;
  byte bVar4;
  
  bVar5 = (byte)param_2;
  pbVar2 = (byte *)(param_1 * 2);
  bVar3 = *pbVar2;
  bVar4 = *pbVar2;
  *pbVar2 = bVar4 + bVar5 + in_CF;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + param_1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8) +
            (CARRY1(bVar3,bVar5) || CARRY1(bVar4 + bVar5,in_CF));
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + bVar5;
  *param_2 = *param_2 +
             CONCAT31((int3)((ulonglong)param_1 >> 8),
                      (byte)param_1 ^ *(byte *)CONCAT71(in_register_00000001,in_AL));
  pbVar2 = (byte *)(CONCAT71(in_register_00000001,in_AL) + CONCAT71(in_register_00000001,in_AL) * 8)
  ;
  *pbVar2 = *pbVar2 << 1 | (char)*pbVar2 < '\0';
  *unaff_RBX = *unaff_RBX & unaff_ESI + (int)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

