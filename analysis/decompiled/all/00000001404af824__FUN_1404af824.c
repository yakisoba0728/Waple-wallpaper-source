// Function: FUN_1404af824
// Addr: 1404af824
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af824(char *param_1,undefined2 param_2)

{
  byte bVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 in_RAX;
  undefined7 uVar5;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  undefined4 *puVar6;
  byte *pbVar4;
  
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (char)in_RAX - 9;
  pbVar4 = (byte *)CONCAT71(uVar5,bVar3);
  *param_1 = *param_1 + unaff_SPL;
  *pbVar4 = *pbVar4 + bVar3;
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar3;
  out(*unaff_RSI,param_2);
  puVar6 = (undefined4 *)(CONCAT71(uVar5,bVar3 + CARRY1(bVar1,bVar3)) & 0xffffffff);
  pcVar2 = (char *)(puVar6 + 1);
  out(*puVar6,param_2);
  *param_1 = *param_1 + (char)unaff_RSI + CARRY1(bVar3,CARRY1(bVar1,bVar3)) + -5;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
  *pcVar2 = *pcVar2 + (char)((ushort)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

