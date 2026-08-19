// Function: FUN_1404bad04
// Addr: 1404bad04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bad04(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined3 uVar2;
  char cVar3;
  uint *in_RAX;
  uint *puVar4;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar3 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar3;
  if ((POPCOUNT((char)*in_RAX) & 1U) != 0) {
    *in_RAX = *in_RAX & (uint)in_RAX;
  }
  uVar2 = SegmentLimit(*(undefined4 *)param_1);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x21004b + unaff_RBP * 4)
  ;
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(char *)in_RAX = (char)*in_RAX + cVar3;
  *(uint **)(CONCAT44((int)((ulonglong)&stack0x00000000 >> 0x20),(uint)(ushort)uVar2) + -8) = in_RAX
  ;
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + *param_1,cVar3));
  *(char *)(param_2 + 2) = *(char *)(param_2 + 2) + unaff_BH;
  *puVar4 = *puVar4 & (uint)puVar4;
  *param_4 = *param_4 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

