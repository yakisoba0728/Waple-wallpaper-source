// Function: FUN_14049fd30
// Addr: 14049fd30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fd30(char *param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char cVar5;
  int in_EAX;
  uint uVar3;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char *unaff_RSI;
  longlong unaff_RDI;
  char *pcVar4;
  
  *param_4 = *param_4 + unaff_SPL;
  uVar3 = in_EAX + 0xe4050002U | *(uint *)(ulonglong)(in_EAX + 0xe4050002U);
  pcVar4 = (char *)(ulonglong)uVar3;
  cVar2 = (char)uVar3;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar2;
  *unaff_RSI = *unaff_RSI + cVar2;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + uVar3;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + 0x49 + (unaff_RDI + 1) * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  cVar5 = (char)(uVar3 >> 8);
  *param_1 = *param_1 + cVar5;
  *pcVar4 = *pcVar4 + cVar2;
  unaff_RSI[0x6000300] = unaff_RSI[0x6000300] + (char)((ulonglong)param_1 >> 8);
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + uVar3;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + 0x49 + (unaff_RDI + 1) * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_1 = *param_1 + cVar5;
  *pcVar4 = *pcVar4 + cVar2;
  unaff_RSI[-0x51fffd00] = unaff_RSI[-0x51fffd00] + cVar5;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar2;
  *pcVar4 = *pcVar4 + unaff_BH;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar4[-0x59fffd00] = pcVar4[-0x59fffd00] + cVar5;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar2;
  out(param_2,CONCAT31((int3)(uVar3 >> 8),cVar2 * '\x02'));
  *param_4 = *param_4 + cVar2 * '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

