// Function: FUN_1404bb40c
// Addr: 1404bb40c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb40c(undefined8 param_1,char param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar4;
  char *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  int *piVar3;
  
  piVar3 = (int *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                  0xd);
  *piVar3 = *piVar3 + (int)&stack0x00000000;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   -0x48);
  cVar4 = (char)((ulonglong)in_RAX >> 8);
  *pcVar1 = *pcVar1 + cVar4;
  *in_RAX = *in_RAX + (char)in_RAX;
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       unaff_BH;
  uVar2 = CONCAT31((int3)cVar4,(char)in_RAX + *(char *)(ulonglong)(uint)(int)(short)in_RAX + 'x');
  uVar2 = uVar2 + *(int *)(ulonglong)uVar2;
  piVar3 = (int *)(ulonglong)uVar2;
  piVar3[1] = piVar3[1] & unaff_EDI;
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) + param_2;
  *(char *)piVar3 = (char)*piVar3 + (char)uVar2;
  *piVar3 = *piVar3 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

