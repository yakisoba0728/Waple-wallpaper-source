// Function: FUN_14005e490
// Addr: 14005e490
// Size: 576 bytes


void FUN_14005e490(longlong param_1)

{
  int iVar1;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined8 uStack_1e4;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [12];
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  
  local_148 = 0;
  local_1a8 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a0 = (undefined8 *)0x0;
  uStack_198 = 0;
  FUN_1404217a0(local_118,0,0x108);
  local_140 = 3;
  local_13c = 1;
  local_190 = 0;
  uStack_188 = 0;
  local_160 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_1fc = 3;
  local_170 = 0;
  uStack_168 = 0;
  local_1dc = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_208 = 0x15;
  local_128 = 0;
  uStack_120 = 0;
  local_200 = 3;
  local_1ec = 0;
  uStack_1e4 = 0;
  local_204 = 3;
  local_1f4 = 1;
  local_1f0 = 8;
  local_1d8 = 0x7f7fffff;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xb8))
                    (*(longlong **)(param_1 + 0x78),&local_208,param_1 + 0x90);
  if (-1 < iVar1) {
    local_1fc = CONCAT44(local_1fc._4_4_,1);
    local_200 = 1;
    local_204 = 1;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xb8))
                      (*(longlong **)(param_1 + 0x78),&local_208,param_1 + 0x98);
    if (-1 < iVar1) {
      local_1c0 = 0;
      local_1cc = 2;
      local_1c8 = 4;
      local_1c4 = 0x10000;
      local_1d0 = 0xa0;
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x18))
                        (*(longlong **)(param_1 + 0x78),&local_1d0,0,param_1 + 0xa8);
      if (-1 < iVar1) {
        local_1a0 = &local_158;
        local_1b8 = 0x100000014;
        uStack_1b0 = CONCAT44(uStack_1b0._4_4_,1);
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x18))
                          (*(longlong **)(param_1 + 0x78),&local_1b8,&local_1a0,param_1 + 0xb0);
        if (-1 < iVar1) {
          local_f4 = 0xf;
          local_104 = 1;
          local_f8 = 1;
          local_10c = 2;
          local_100 = 2;
          local_108 = 1;
          local_fc = 1;
          iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xa0))
                            (*(longlong **)(param_1 + 0x78),local_118,param_1 + 0xb8);
          if (-1 < iVar1) {
            local_190 = 0x100000001;
            uStack_188 = CONCAT44(uStack_188._4_4_,2);
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xa8))
                              (*(longlong **)(param_1 + 0x78),&local_190,param_1 + 0xc0);
            if (-1 < iVar1) {
              (**(code **)(**(longlong **)(param_1 + 0x78) + 0xb0))
                        (*(longlong **)(param_1 + 0x78),&local_140,param_1 + 0xa0);
            }
          }
        }
      }
    }
  }
  return;
}

