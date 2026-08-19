// Function: FUN_1404d5ab0
// Addr: 1404d5ab0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d5af9) */

void FUN_1404d5ab0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  undefined2 in_AX;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  char *unaff_RDI;
  undefined8 uStack_10;
  
  uVar2 = CONCAT31((int3)(char)((ushort)in_AX >> 8),cRam009e02c8c0b8b0a8);
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + cRam009e02c8c0b8b0a8;
  *(int *)((longlong)unaff_RBP + (longlong)param_2) =
       *(int *)((longlong)unaff_RBP + (longlong)param_2) + uVar2;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x11';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *unaff_RDI = *unaff_RDI + unaff_BL;
  *unaff_RDI = '\x04';
  *param_2 = *param_2 + unaff_BL;
  if (*param_2 < '\0') {
    *unaff_RDI = *unaff_RDI + (char)param_1;
    iRam000000015d824808 = iRam000000015d824808 + (int)param_2;
    bRam00000000aec12404 = bRam00000000aec12404 | (byte)((ulonglong)param_2 >> 8);
    *param_1 = *param_1 + (char)param_2;
    uRam00000001458f63f3 = uRam00000001458f63f3 | 0xaec12404;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

