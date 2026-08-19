// Function: FUN_14049fd20
// Addr: 14049fd20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fd20(char *param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char cVar4;
  uint in_EAX;
  uint uVar2;
  char *pcVar3;
  char cVar5;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar5 = (char)((ulonglong)param_1 >> 8);
  uVar2 = in_EAX | 0x5000a64;
  *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 | uVar2;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)uVar2;
  *(char *)(unaff_RSI + 0x38000301) = *(char *)(unaff_RSI + 0x38000301) + cVar5;
  *param_4 = *param_4 + (char)&stack0xfffffffffffffff8;
  uVar2 = uVar2 + 0xe4050002 | *(uint *)(ulonglong)(uVar2 + 0xe4050002);
  pcVar3 = (char *)(ulonglong)uVar2;
  cVar1 = (char)uVar2;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar1;
  *(char *)(unaff_RSI + 1) = *(char *)(unaff_RSI + 1) + cVar1;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + uVar2;
  (&stack0x00000041)[(unaff_RDI + 2) * 8] = (&stack0x00000041)[(unaff_RDI + 2) * 8] + (char)param_1;
  cVar4 = (char)(uVar2 >> 8);
  *param_1 = *param_1 + cVar4;
  *pcVar3 = *pcVar3 + cVar1;
  *(char *)(unaff_RSI + 0x6000301) = *(char *)(unaff_RSI + 0x6000301) + cVar5;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + uVar2;
  (&stack0x00000041)[(unaff_RDI + 2) * 8] = (&stack0x00000041)[(unaff_RDI + 2) * 8] + (char)param_1;
  *param_1 = *param_1 + cVar4;
  *pcVar3 = *pcVar3 + cVar1;
  *(char *)(unaff_RSI + -0x51fffcff) = *(char *)(unaff_RSI + -0x51fffcff) + cVar4;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar1;
  *pcVar3 = *pcVar3 + unaff_BH;
  *param_4 = *param_4 + (char)&stack0xfffffffffffffff8;
  *pcVar3 = *pcVar3 + cVar1;
  pcVar3[-0x59fffd00] = pcVar3[-0x59fffd00] + cVar4;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar1;
  out(param_2,CONCAT31((int3)(uVar2 >> 8),cVar1 * '\x02'));
  *param_4 = *param_4 + cVar1 * '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

