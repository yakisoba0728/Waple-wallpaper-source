// Function: FUN_1404d2654
// Addr: 1404d2654
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2654(undefined8 param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  char cVar2;
  int in_EAX;
  char *pcVar1;
  char unaff_BH;
  char *unaff_RSI;
  char unaff_R12B;
  uint7 uVar3;
  
  uVar3 = (uint7)(uint3)((uint)(in_EAX + -0x1ffff988) >> 8);
  pcVar1 = (char *)CONCAT71(uVar3,0x3e);
  *unaff_RSI = *unaff_RSI + unaff_BH;
  cVar2 = (char)((uint)(in_EAX + -0x1ffff988) >> 8);
  pcVar1[0x25] = pcVar1[0x25] + cVar2;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar1 = *pcVar1 + '>';
  pcVar1 = (char *)CONCAT71(uVar3,0x3e);
  *unaff_RSI = *unaff_RSI + unaff_BH;
  pcVar1[0x25] = pcVar1[0x25] + cVar2;
  *param_4 = *param_4 + unaff_R12B;
  *param_2 = *param_2 | 0x3e;
  *pcVar1 = *pcVar1 + '>';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

