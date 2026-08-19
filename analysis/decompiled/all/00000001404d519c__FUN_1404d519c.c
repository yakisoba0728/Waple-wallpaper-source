// Function: FUN_1404d519c
// Addr: 1404d519c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d519c(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  undefined1 in_AL;
  byte bVar3;
  char in_AH;
  char cVar4;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  char unaff_R12B;
  
  pbVar2 = (byte *)(param_1 + param_2);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + (byte)param_2;
  cVar4 = in_AH + unaff_BL + CARRY1(bVar3,(byte)param_2);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar4,in_AL))) + 0x50);
  *pcVar1 = *pcVar1 + cVar4;
  *param_4 = *param_4 + unaff_R12B;
  bVar3 = in(5);
  *param_1 = *param_1 + cVar4;
  if (*param_1 == '\0') {
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,bVar3))) =
         *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar4,bVar3))
                          ) | bVar3;
    bRam0000000146345204 = bRam0000000146345204 << 1 | (char)bRam0000000146345204 < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

