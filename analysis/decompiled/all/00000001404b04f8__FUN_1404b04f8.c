// Function: FUN_1404b04f8
// Addr: 1404b04f8
// Size: 1 bytes


void FUN_1404b04f8(char param_1,char param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *in_RAX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char *pcVar4;
  
  bVar1 = *in_RAX;
  *in_RAX = (char)*in_RAX >> 1;
  uVar3 = (int)in_RAX + 0x15398700 + (uint)(bVar1 & 1);
  pcVar4 = (char *)(ulonglong)uVar3;
  cVar2 = (char)uVar3;
  pcVar4[CONCAT71(unaff_00000021,unaff_SPL)] = pcVar4[CONCAT71(unaff_00000021,unaff_SPL)] + cVar2;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar4 = *pcVar4 + cVar2;
  cVar2 = cVar2 + param_2;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar2);
  pcVar4[CONCAT71(unaff_00000021,unaff_SPL)] = pcVar4[CONCAT71(unaff_00000021,unaff_SPL)] + cVar2;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar4 = *pcVar4 + param_1;
  *pcVar4 = *pcVar4 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

