// Function: FUN_1404ac0dc
// Addr: 1404ac0dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac0dc(char *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined1 in_AL;
  char cVar5;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uRam00000001044fc0e4 = uRam00000001044fc0e4 & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
  ;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)(unaff_RDI + -0x50b4fff1) =
       *(char *)(unaff_RDI + -0x50b4fff1) + (char)((ulonglong)param_1 >> 8);
  uVar4 = LocalDescriptorTableRegister();
  *(undefined4 *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       = uVar4;
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       ^ (byte)param_1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + (char)((ulonglong)param_2 >> 8);
  cVar5 = in(8);
  pbVar1 = (byte *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 2);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5)))
       + cVar5 + CARRY1(bVar2,in_AH);
  cRam000000018b4acf59 = cRam000000018b4acf59 + cVar5;
  verw();
  uVar3 = TaskRegister();
  *(undefined2 *)
   (CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) +
   CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) * 8) = uVar3;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5)))
       + cVar5;
  *(char *)(unaff_RBX + -0x51) = *(char *)(unaff_RBX + -0x51) + (byte)param_1;
  verw();
  uVar3 = TaskRegister();
  *(undefined2 *)
   (CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) +
   CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) * 8) = uVar3;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5)))
       + cVar5;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5)))
       + (char)param_2;
  uVar3 = TaskRegister();
  *(undefined2 *)(unaff_RBX + -0x51) = uVar3;
  uVar4 = LocalDescriptorTableRegister();
  *(undefined4 *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5)))
       = uVar4;
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  *param_2 = *param_2 + cVar5;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5)))
       + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

