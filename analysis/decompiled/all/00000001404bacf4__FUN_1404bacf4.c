// Function: FUN_1404bacf4
// Addr: 1404bacf4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bacf4(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  char cVar4;
  char cVar6;
  uint *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  uint *unaff_RDI;
  uint *puVar5;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar3 = SegmentLimit(*(undefined4 *)param_1);
  cVar6 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar6;
  uVar2 = *(undefined4 *)param_1;
  cVar4 = (char)in_RAX + (char)param_2;
  puVar5 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  *unaff_RDI = (uint)puVar5;
  *param_4 = *param_4 + (char)uVar3 + (char)uVar2;
  *(char *)puVar5 = (char)*puVar5 + cVar4;
  *(char *)(param_2 + 2) = *(char *)(param_2 + 2) + unaff_BH;
  *puVar5 = *puVar5 & (uint)puVar5;
  uVar3 = SegmentLimit(*(undefined4 *)param_1);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x21004b + unaff_RBP * 4)
  ;
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(char *)puVar5 = (char)*puVar5 + cVar4;
  *(uint **)((ulonglong)(ushort)uVar3 - 8) = puVar5;
  puVar5 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar6 + *param_1,cVar4));
  *(char *)(param_2 + 2) = *(char *)(param_2 + 2) + unaff_BH;
  *puVar5 = *puVar5 & (uint)puVar5;
  *param_4 = *param_4 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

