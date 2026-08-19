// Function: FUN_1404cb090
// Addr: 1404cb090
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb090(char *param_1,longlong param_2)

{
  undefined3 uVar1;
  char cVar2;
  uint uVar3;
  uint *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *pcVar4;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar3 = (uint)in_RAX ^ *in_RAX;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + -1);
  uVar3 = uVar3 ^ *(uint *)(ulonglong)uVar3;
  pcVar4 = (char *)(ulonglong)uVar3;
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  *pcVar4 = *pcVar4 + (char)param_1;
  *pcVar4 = *pcVar4 + (char)uVar3;
  uVar1 = (undefined3)(uVar3 >> 8);
  cVar2 = in(5);
  pcVar4 = (char *)(ulonglong)CONCAT31(uVar1,cVar2);
  *pcVar4 = *pcVar4 + cVar2;
  pcVar4 = (char *)(ulonglong)CONCAT31(uVar1,cVar2);
  pcVar4[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH + (char)in_RAX,unaff_BL))] =
       pcVar4[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH + (char)in_RAX,unaff_BL))] + (char)param_2;
  pcVar4[param_2] = pcVar4[param_2] + (char)((ulonglong)param_2 >> 8);
  *pcVar4 = *pcVar4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

