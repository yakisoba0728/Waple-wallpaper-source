// Function: FUN_1404be494
// Addr: 1404be494
// Size: 1 bytes


void FUN_1404be494(char *param_1,char param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint *in_RAX;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char *pcVar3;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x44bcffdb);
  *pbVar1 = *pbVar1 ^ unaff_BH;
  uVar2 = (uint)in_RAX & 0x4b08d400;
  pcVar3 = (char *)(ulonglong)uVar2;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  *pcVar3 = *pcVar3 + param_2;
  *pcVar3 = *pcVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

