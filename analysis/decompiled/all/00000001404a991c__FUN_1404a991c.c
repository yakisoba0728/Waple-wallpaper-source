// Function: FUN_1404a991c
// Addr: 1404a991c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a991c(char *param_1,char *param_2)

{
  char *pcVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char cVar5;
  char cVar6;
  undefined6 uVar7;
  char *unaff_RBX;
  int unaff_ESP;
  
  bVar3 = bRam0500020521004a1d;
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar6 = (char)((ulonglong)param_2 >> 8);
  cVar5 = (char)param_2;
  bVar4 = bRam0500020521004a1d ^ 8;
  pcVar1 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,bRam0500020521004a1d)) ^ 8) - 0x1d
                   );
  *pcVar1 = *pcVar1 + cVar6;
  if (-1 < (char)bVar4) {
    *param_1 = *param_1 + (char)unaff_ESP;
    *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) ^ 8) =
         *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) ^ 8) + bVar4;
    pcVar1 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) ^ 8) - 0x1d);
    *pcVar1 = *pcVar1 + cVar6;
    if ((char)bVar4 < '\0') {
      piVar2 = (int *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) ^ 8) +
                      (CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) ^ 8));
      *piVar2 = *piVar2 + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1 + bVar4;
    *param_2 = *param_2 + cVar5;
    bVar4 = 0;
    *(char *)CONCAT62(uVar7,CONCAT11(cVar6 + *unaff_RBX,cVar5)) =
         *(char *)CONCAT62(uVar7,CONCAT11(cVar6 + *unaff_RBX,cVar5)) + cVar5;
  }
  *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) + unaff_ESP;
  *unaff_RBX = *unaff_RBX + (char)param_1;
  *param_1 = *param_1 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

