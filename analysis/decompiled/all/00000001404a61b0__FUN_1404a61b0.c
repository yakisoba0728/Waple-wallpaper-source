// Function: FUN_1404a61b0
// Addr: 1404a61b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a61b0(undefined8 param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  uint *in_RAX;
  char *pcVar3;
  char *pcVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  byte bVar8;
  char cVar9;
  undefined6 uVar10;
  char cVar11;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar8 = (byte)param_2;
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar6 = (undefined2)((ulonglong)param_1 >> 0x10);
  uVar5 = (undefined1)param_1;
  *param_2 = *param_2 + unaff_EBX;
  uVar2 = (uint)in_RAX | *in_RAX;
  cVar1 = (char)((ulonglong)param_1 >> 8) - *(char *)((ulonglong)uVar2 + 4);
  *(byte *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar1,uVar5))) =
       *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar1,uVar5))) + bVar8;
  uRamc007d009e00bf00d = (undefined1)uVar2;
  pcVar3 = (char *)(ulonglong)(uVar2 + 0x3600470);
  cVar9 = (char)((ulonglong)param_2 >> 8) + *pcVar3;
  *pcVar3 = *pcVar3 + (char)(uVar2 + 0x3600470);
  *(uint *)CONCAT62(uVar10,CONCAT11(cVar9,bVar8)) =
       *(uint *)CONCAT62(uVar10,CONCAT11(cVar9,bVar8)) & CONCAT22(uVar6,CONCAT11(cVar1,uVar5));
  bVar8 = bVar8 | *(byte *)(CONCAT44(unaff_0000001c,unaff_EBX) +
                           CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar1,uVar5))));
  pcVar3 = (char *)((ulonglong)(uVar2 + 0xd3600ea4) & 0xffffffffffffff09);
  cVar11 = (char)unaff_EBX;
  *pcVar3 = *pcVar3 + cVar11;
  uVar2 = (uint)pcVar3 & 0x11800009;
  *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar1,uVar5))) =
       *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar1,uVar5))) + -8;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  pcVar4 = (char *)((ulonglong)CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + bVar8) & 0xffffffffffffff09
                   );
  *pcVar4 = *pcVar4 + cVar11;
  *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar1,uVar5))) =
       *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar1,uVar5))) + -8;
  *(char *)((longlong)pcVar4 * 2) = *(char *)((longlong)pcVar4 * 2) + (char)pcVar4;
  pcVar3 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) +
                   CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar1,uVar5))));
  *pcVar3 = *pcVar3 + bVar8;
  pcVar3 = (char *)(CONCAT62(uVar10,CONCAT11(cVar9,bVar8)) +
                   CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar1,uVar5))));
  *pcVar3 = *pcVar3 + cVar9;
  pcVar3 = (char *)(CONCAT71((int7)((ulonglong)pcVar4 >> 8),(char)pcVar4 + bVar8) &
                   0xffffffffffffff09);
  *pcVar3 = *pcVar3 + cVar11;
  *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar1,uVar5))) =
       *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar1,uVar5))) + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

