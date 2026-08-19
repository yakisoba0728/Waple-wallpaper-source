// Function: FUN_1404a8f14
// Addr: 1404a8f14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8f14(byte *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  byte in_AL;
  byte in_AH;
  char cVar4;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar5;
  longlong unaff_RBP;
  byte *unaff_RDI;
  
  bVar5 = (byte)(param_2 >> 8);
  *param_1 = *param_1 ^ in_AH;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AL;
  cVar4 = in_AH + bVar5 + CARRY1(bVar2,in_AL);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,in_AL)))
       & in_AL;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar4,in_AL))) + unaff_RBP);
  *pbVar1 = *pbVar1 | bVar5;
  uVar3 = uRam38000c25f0000c24;
  *(uint *)CONCAT44(in_register_00000004,
                    CONCAT22(in_register_00000002,CONCAT11(cVar4,uRam38000c25f0000c24))) =
       *(uint *)CONCAT44(in_register_00000004,
                         CONCAT22(in_register_00000002,CONCAT11(cVar4,uRam38000c25f0000c24))) &
       param_2;
  cVar4 = cVar4 * '\x02';
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,uVar3))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,uVar3))) -
       CONCAT22(in_register_00000002,CONCAT11(cVar4,uVar3));
  *unaff_RDI = *unaff_RDI | (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

