#!/bin/bash
echo "=== 开始配置基础环境 ==="

# 1. 安装 Git 和 tmux
apt update && apt install -y git tmux

# 2. 配置 Git 身份
git config --global user.name "forgetover"
git config --global user.email "2136514998@qq.com"

# 3. 生成 SSH 密钥（如果不存在则生成，避免覆盖原有密钥）
if [ ! -f ~/.ssh/id_ed25519 ]; then
    echo "生成新的 SSH 密钥..."
    ssh-keygen -t ed25519 -C "2136514998@qq.com" -f ~/.ssh/id_ed25519 -N ""
else
    echo "SSH 密钥已存在，跳过生成。"
fi

# 4. 打印公钥
echo "=================================================="
echo "请复制下面的公钥到 GitHub -> Settings -> SSH and GPG keys"
echo "=================================================="
cat ~/.ssh/id_ed25519.pub
echo "=================================================="
echo "环境配置完成！"
