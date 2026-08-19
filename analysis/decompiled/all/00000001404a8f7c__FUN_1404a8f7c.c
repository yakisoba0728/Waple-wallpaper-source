// Function: FUN_1404a8f7c
// Addr: 1404a8f7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8f7c(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  char in_AH;
  char cVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar4;
  longlong unaff_RBP;
  
  bVar2 = bRam38000c25f0000c24;
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT44(in_register_00000004,
                    CONCAT22(in_register_00000002,CONCAT11(in_AH,bRam38000c25f0000c24))) =
       *(uint *)CONCAT44(in_register_00000004,
                         CONCAT22(in_register_00000002,CONCAT11(in_AH,bRam38000c25f0000c24))) &
       CONCAT22(in_register_00000002,CONCAT11(in_AH,bRam38000c25f0000c24));
  cVar3 = in_AH + cVar4;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2)))
       & bVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2))) + unaff_RBP);
  *pcVar1 = *pcVar1 + cVar4;
  bVar2 = bRam38000c25f0000c24;
  *(int *)CONCAT44(in_register_00000004,
                   CONCAT22(in_register_00000002,CONCAT11(cVar3,bRam38000c25f0000c24))) =
       *(int *)CONCAT44(in_register_00000004,
                        CONCAT22(in_register_00000002,CONCAT11(cVar3,bRam38000c25f0000c24))) +
       (int)param_2;
  *(char *)(param_2 + 0x1c21700c) =
       *(char *)(param_2 + 0x1c21700c) + cVar4 +
       CARRY1(bVar2,*(byte *)CONCAT44(in_register_00000004,
                                      CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar2))));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

