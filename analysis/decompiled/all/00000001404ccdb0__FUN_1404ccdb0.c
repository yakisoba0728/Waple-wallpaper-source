// Function: FUN_1404ccdb0
// Addr: 1404ccdb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ccdb0(char *param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  uint uVar2;
  char cVar5;
  undefined8 in_RAX;
  undefined6 uVar6;
  uint *puVar3;
  char cVar7;
  byte *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char *pcVar4;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  uVar6 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar5 = (char)((ulonglong)in_RAX >> 8) + (char)param_2;
  bVar1 = (byte)in_RAX | *(byte *)CONCAT62(uVar6,CONCAT11(cVar5,(byte)in_RAX));
  puVar3 = (uint *)CONCAT62(uVar6,CONCAT11(cVar5 + bVar1,bVar1));
  uVar2 = (uint)puVar3 | *puVar3;
  pcVar4 = (char *)(ulonglong)uVar2;
  (&stack0x00000000)[(longlong)param_1] = (&stack0x00000000)[(longlong)param_1] + cVar7;
  cVar5 = (char)(uVar2 >> 8);
  param_1[unaff_RBP] = param_1[unaff_RBP] + cVar5;
  param_1[unaff_RSI] = param_1[unaff_RSI] + cVar7;
  pcVar4[-0x36ffca98] = pcVar4[-0x36ffca98] + cVar5;
  *param_1 = *param_1 + param_3;
  *unaff_RBX = *unaff_RBX | (byte)uVar2;
  *pcVar4 = *pcVar4 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

