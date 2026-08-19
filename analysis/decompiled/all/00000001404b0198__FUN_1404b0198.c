// Function: FUN_1404b0198
// Addr: 1404b0198
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0198(int *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  char cVar2;
  char *in_RAX;
  undefined7 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined6 uVar6;
  uint unaff_EBX;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar5 = (undefined1)((ulonglong)param_2 >> 8);
  *param_4 = *param_4;
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar2 = (char)in_RAX * '\x02';
  bVar4 = (byte)param_2 | bRam000000015555dca7;
  pcVar1 = (char *)(CONCAT71(uVar3,cVar2) * 2 + 0x1101004b);
  *pcVar1 = *pcVar1 + cVar2;
  *param_1 = *param_1 + (int)CONCAT71(uVar3,cVar2);
  *(uint *)CONCAT62(uVar6,CONCAT11(uVar5,bVar4)) =
       *(uint *)CONCAT62(uVar6,CONCAT11(uVar5,bVar4)) & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

