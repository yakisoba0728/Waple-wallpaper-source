// Function: FUN_140098350
// Addr: 140098350
// Size: 871 bytes


void FUN_140098350(undefined8 param_1)

{
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  tm *ptVar4;
  undefined8 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  __time64_t local_res10;
  char local_161;
  undefined2 local_160;
  char local_15e [2];
  int iStack_15c;
  undefined *local_158;
  undefined1 local_150 [8];
  uint auStack_148 [14];
  longlong alStack_110 [8];
  longlong local_d0;
  undefined4 local_b4;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_48;
  undefined5 uStack_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  
  iVar1 = FUN_140290d80(&DAT_1404df6e0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404df72c == 0x7fffffff) {
    DAT_1404df72c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  if (DAT_1404e8c24 < 0x3e801) {
    DAT_1404e8c24 = DAT_1404e8c24 + 1;
    local_158 = &DAT_140475e00;
    local_b0 = std::basic_ostream<char,std::char_traits<char>_>::vftable;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = (undefined1 *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_b4 = 0x98;
    FUN_140013870(&local_b0);
    local_68 = local_150;
    uStack_60 = 0;
    local_58 = FUN_140013490(&local_b0,0x20);
    if (local_68 == (undefined1 *)0x0) {
      FUN_140013b50(&local_b0,(uint)local_a0 | 4,0);
    }
    *(undefined ***)(local_150 + (longlong)*(int *)(local_158 + 4) + -8) = &PTR_LAB_140475e08;
    *(int *)((longlong)&iStack_15c + (longlong)*(int *)(local_158 + 4)) =
         *(int *)(local_158 + 4) + -0xa8;
    FUN_14004c570(local_150);
    lVar3 = FUN_14004c4c0(local_150,L"log.txt",10);
    piVar7 = (int *)(local_158 + 4);
    if (lVar3 == 0) {
      uVar6 = 6;
      if (*(longlong *)((longlong)alStack_110 + (longlong)*piVar7) != 0) {
        uVar6 = 2;
      }
      uVar6 = uVar6 | *(uint *)((longlong)auStack_148 + (longlong)*piVar7);
    }
    else {
      uVar6 = 4;
      if (*(longlong *)((longlong)alStack_110 + (longlong)*piVar7) != 0) {
        uVar6 = 0;
      }
    }
    FUN_140013b50(local_150 + (longlong)*piVar7 + -8,uVar6,0);
    if (local_d0 != 0) {
      FUN_1402c83d4(&local_res10);
      local_48 = 0;
      uStack_40 = 0;
      uStack_3b = 0;
      uStack_38 = 0;
      ptVar4 = _gmtime64(&local_res10);
      FUN_1402c8b44(&local_48,0x15,"%Y-%m-%dT%H:%M:%SZ",ptVar4);
      uVar5 = FUN_14000c990(&local_158,&local_48);
      uVar5 = FUN_14000c990(uVar5,&DAT_140474e90);
      local_15e[0] = '\0';
      DVar2 = GetCurrentThreadId();
      if (DVar2 < 10) {
        local_160._1_1_ = (char)DVar2 + '0';
        pcVar9 = (char *)((longlong)&local_160 + 1);
      }
      else {
        pcVar9 = local_15e;
        do {
          pcVar8 = pcVar9;
          pcVar9 = pcVar8 + -2;
          uVar6 = DVar2 / 100;
          *(undefined2 *)pcVar9 = *(undefined2 *)(&DAT_140474390 + (ulonglong)(DVar2 % 100) * 2);
          DVar2 = uVar6;
        } while (9 < uVar6);
        if (uVar6 != 0) {
          pcVar9 = pcVar8 + -3;
          *pcVar9 = (char)uVar6 + '0';
        }
      }
      uVar5 = FUN_14000c990(uVar5,pcVar9);
      uVar5 = FUN_14000c990(uVar5,&DAT_14047889c);
      FUN_14000c990(uVar5,param_1);
      lVar3 = FUN_14004c3c0(local_150);
      if (lVar3 == 0) {
        lVar3 = (longlong)*(int *)(local_158 + 4);
        uVar6 = 6;
        if (*(longlong *)((longlong)alStack_110 + lVar3) != 0) {
          uVar6 = 2;
        }
        FUN_140013b50(local_150 + lVar3 + -8,uVar6 | *(uint *)((longlong)auStack_148 + lVar3),0);
      }
    }
    *(undefined ***)(local_150 + (longlong)*(int *)(local_158 + 4) + -8) = &PTR_LAB_140475e08;
    *(int *)((longlong)&iStack_15c + (longlong)*(int *)(local_158 + 4)) =
         *(int *)(local_158 + 4) + -0xa8;
    FUN_14004a790(local_150);
    *(undefined ***)(local_150 + (longlong)*(int *)(local_158 + 4) + -8) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)&iStack_15c + (longlong)*(int *)(local_158 + 4)) =
         *(int *)(local_158 + 4) + -0x10;
    local_b0 = std::ios_base::vftable;
    FUN_14028c430(&local_b0);
  }
  FUN_140290ea0(&DAT_1404df6e0);
  return;
}

