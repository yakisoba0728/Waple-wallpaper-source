// Function: FUN_1404a1910
// Addr: 1404a1910
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1910(char *param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte in_AL;
  char cVar5;
  byte bVar6;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar7;
  undefined7 uVar8;
  longlong unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  longlong in_FS_OFFSET;
  char in_CF;
  
  uVar8 = (undefined7)((ulonglong)param_2 >> 8);
  cVar7 = ((char)param_2 -
          *(char *)(CONCAT71(unaff_00000021,unaff_SPL) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))))) - in_CF;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + unaff_RBX);
  *pcVar1 = *pcVar1 + cVar7;
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x12);
  *pcVar1 = *pcVar1 + cVar7;
  if (-1 < (char)in_AL) {
    cVar5 = in_AL + 0x18;
    *param_1 = *param_1 + unaff_SPL;
    *(char *)CONCAT71(uVar8,cVar7) = *(char *)CONCAT71(uVar8,cVar7) + (char)param_1;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))
                          ) + cVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  cVar5 = in_AH + in_AL;
  *param_3 = *param_3 + in_AL;
  pcVar1 = (char *)(in_FS_OFFSET +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL))));
  *pcVar1 = *pcVar1 + in_AL;
  bVar6 = in_AL ^ 0x47;
  pcVar1 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL))) ^ 0x47) + 0x12);
  *pcVar1 = *pcVar1 + cVar7;
  if (-1 < (char)bVar6) {
    *param_1 = *param_1 + bVar6 + 0x18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = (uint *)(CONCAT71(uVar8,cVar7) +
                   (CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL))) ^ 0x47));
  *puVar2 = *puVar2 & (CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL)) ^ 0x47);
  pbVar3 = (byte *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI);
  bVar4 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar6;
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL))) ^
           0x47) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL)))
                ^ 0x47) + bVar6 + CARRY1(bVar4,bVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

