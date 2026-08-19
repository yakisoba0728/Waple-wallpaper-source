// Function: FUN_1404c60a0
// Addr: 1404c60a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c60a0(char *param_1,char *param_2,byte param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  char cVar4;
  char in_AL;
  char cVar5;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte *pbVar6;
  uint *unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  char unaff_R12B;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  *param_1 = *param_1 + unaff_R12B;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 + in_AL;
  cVar4 = in_AH * '\x02';
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar4,in_AL));
  param_1[CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,in_AL)))] =
       param_1[CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,in_AL)))]
       + cVar4;
  puVar2 = (undefined1 *)
           (((ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_OF & 1) * 0x800 |
             (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
             (ulonglong)(in_SF & 1) * 0x80 | (ulonglong)(in_ZF & 1) * 0x40 |
             (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)(in_PF & 1) * 4 | (ulonglong)(in_CF & 1) |
             (ulonglong)(in_ID & 1) * 0x200000 | (ulonglong)(in_VIP & 1) * 0x100000 |
             (ulonglong)(in_VIF & 1) * 0x80000 | (ulonglong)(in_AC & 1) * 0x40000) +
           CONCAT44(unaff_0000002c,unaff_EBP));
  *puVar2 = *puVar2;
  pbVar6 = (byte *)(ulonglong)(uint)((int)param_1 + iRam000000019fe860e9);
  bVar3 = *pbVar6;
  *pbVar6 = *pbVar6 + param_3;
  cVar5 = in_AL + '\x01' + CARRY1(bVar3,param_3);
  *param_2 = *param_2 + (char)param_2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,cVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,cVar5)))
       + cVar5;
  *unaff_RBX = *unaff_RBX & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

