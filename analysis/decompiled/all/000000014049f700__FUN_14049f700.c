// Function: FUN_14049f700
// Addr: 14049f700
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f700(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined2 uVar1;
  uint uVar2;
  char cVar3;
  byte bVar6;
  uint in_EAX;
  uint uVar4;
  longlong unaff_RSI;
  char *unaff_RDI;
  char in_AF;
  uint *puVar5;
  
  uVar4 = in_EAX + 0x66000fe4;
  uVar1 = (undefined2)(uVar4 >> 0x10);
  cVar3 = (char)uVar4;
  bVar6 = ((int)uVar4 < 0) << 7 | (uVar4 == 0) << 6 | in_AF << 4 |
          ((POPCOUNT(uVar4 & 0xff) & 1U) == 0) << 2 | 2U | 0x99fff01b < in_EAX;
  uVar2 = CONCAT22(uVar1,CONCAT11(bVar6,cVar3));
  puVar5 = (uint *)(ulonglong)uVar2;
  *puVar5 = *puVar5 + uVar2;
  *(char *)puVar5 = (char)*puVar5 + cVar3;
  *(char *)(unaff_RSI + -0x61) = *(char *)(unaff_RSI + -0x61) + bVar6;
  *puVar5 = *puVar5 + uVar2;
  *(char *)puVar5 = (char)*puVar5 + cVar3;
  *(char *)((longlong)puVar5 + -0x61) = *(char *)((longlong)puVar5 + -0x61) + bVar6;
  uVar4 = *puVar5;
  *puVar5 = *puVar5 + uVar2;
  uVar4 = CONCAT22(uVar1,CONCAT11(((int)*puVar5 < 0) << 7 | (*puVar5 == 0) << 6 | in_AF << 4 |
                                  ((POPCOUNT(*puVar5 & 0xff) & 1U) == 0) << 2 | 2U |
                                  CARRY4(uVar4,uVar2),cVar3));
  *(int *)(ulonglong)uVar4 = *(int *)(ulonglong)uVar4 + uVar4;
  *param_4 = *param_4 + cVar3;
  *unaff_RDI = *unaff_RDI + param_1;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

