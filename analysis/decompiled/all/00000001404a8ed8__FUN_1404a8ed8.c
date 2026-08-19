// Function: FUN_1404a8ed8
// Addr: 1404a8ed8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8ed8(longlong param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar4;
  longlong unaff_RDI;
  byte in_CF;
  bool bVar5;
  byte bVar3;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + param_1);
  bVar5 = CARRY1(*pbVar1,bVar4) || CARRY1(*pbVar1 + bVar4,in_CF);
  *pbVar1 = *pbVar1 + bVar4 + in_CF;
  pbVar1 = (byte *)(unaff_RDI +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  bVar2 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = bVar3 + in_AH + bVar5;
  *param_2 = *param_2 + bVar4 + (CARRY1(bVar2,in_AH) || CARRY1(bVar3 + in_AH,bVar5));
  uRam00000001744f8eec =
       uRam00000001744f8eec & (CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0xe0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

