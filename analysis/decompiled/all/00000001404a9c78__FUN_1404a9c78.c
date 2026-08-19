// Function: FUN_1404a9c78
// Addr: 1404a9c78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9c78(uint param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  byte in_AL;
  byte bVar5;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar6;
  char unaff_SPL;
  char *unaff_RSI;
  
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + in_AL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bVar5 = in_AL ^ 6;
  *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 6)
       = *(char *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 6) +
         (char)param_2;
  param_1 = param_1 ^ uRam000000014d7dd58b;
  pcVar1 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 6) +
                   0x210049ef);
  *pcVar1 = *pcVar1 + (char)(param_1 >> 8);
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 6)
       = *(char *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 6) + bVar5;
  *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 6)
       = *(char *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 6) +
         (char)param_2;
  param_1 = param_1 ^ uRam000000014d7dd59b;
  pbVar2 = (byte *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 6) + 0x10049ef
                   );
  bVar3 = *pbVar2;
  bVar6 = (byte)(param_1 >> 8);
  *pbVar2 = *pbVar2 + bVar6;
  iRam00000001524bada7 =
       iRam00000001524bada7 + (CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 6) +
       (uint)CARRY1(bVar3,bVar6);
  cVar4 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + bVar5;
  if (!SCARRY1(cVar4,bVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(unaff_RSI + 0x348e000a) = *(uint *)(unaff_RSI + 0x348e000a) & param_1;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 6)
       = *(int *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) ^ 6) - (CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

