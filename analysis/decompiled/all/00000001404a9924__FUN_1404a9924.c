// Function: FUN_1404a9924
// Addr: 1404a9924
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9924(char *param_1,char *param_2)

{
  char cVar1;
  int in_EAX;
  char cVar3;
  char cVar4;
  undefined6 uVar5;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_ESP;
  char *pcVar2;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar4 = (char)((ulonglong)param_2 >> 8);
  cVar3 = (char)param_2;
  pcVar2 = (char *)(ulonglong)(in_EAX + 0x70000834U);
  if (param_1 != (char *)0x0) {
    *param_2 = *param_2 + unaff_BH;
    cVar1 = in(0xc);
    pcVar2 = (char *)(ulonglong)CONCAT31((int3)(in_EAX + 0x70000834U >> 8),cVar1);
    pcVar2[0x1f] = pcVar2[0x1f] + unaff_BH;
    *param_1 = *param_1 + (char)unaff_ESP;
    *pcVar2 = *pcVar2 + cVar1;
  }
  pcVar2[-0x1d] = pcVar2[-0x1d] + cVar4;
  if ((char)pcVar2 < '\0') {
    *(int *)((longlong)pcVar2 * 2) = *(int *)((longlong)pcVar2 * 2) + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)pcVar2;
  *param_2 = *param_2 + cVar3;
  cVar4 = cVar4 + *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar3)) + cVar3;
  *(int *)((ulonglong)pcVar2 & 0xffffffffffffff00) =
       *(int *)((ulonglong)pcVar2 & 0xffffffffffffff00) + unaff_ESP;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_1;
  *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

