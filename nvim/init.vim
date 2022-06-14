call plug#begin('~/.vim/plugged')
Plug 'joshdick/onedark.vim'
Plug 'morhetz/gruvbox'
Plug 'vim-airline/vim-airline'
Plug 'preservim/nerdtree'
Plug 'vim-airline/vim-airline-themes'
Plug 'tomasr/molokai'
"Plug 'ukyouz/onedark.vim'
Plug 'tree-sitter/tree-sitter'
Plug 'tree-sitter/tree-sitter-c'
Plug 'vim-scripts/AutoComplPop'
Plug 'neoclide/coc.nvim', { 'branch': 'release' }
Plug 'sainnhe/sonokai'
Plug 'drewtempelmeyer/palenight.vim'
"Plug 'ryanoasis/vim-devicons'
Plug 'junegunn/fzf', { 'do': { -> fzf#install() } }
Plug 'junegunn/fzf.vim'
Plug 'morhetz/gruvbox'

call plug#end()

colorscheme gruvbox 

set runtimepath+=~/.config/nvim/syntax

set updatetime=300
set hlsearch
set backspace=indent,eol,start
set relativenumber
set cursorline
set number
syntax on
set shiftwidth=4
set softtabstop=4
set autoindent
set smartindent
set termguicolors
set tabstop=4
filetype on
filetype indent on
filetype plugin on
set omnifunc=syntaxcomplete#Complete

set encoding=UTF-8


nnoremap <Leader>cc :set colorcolumn=80<cr>
nnoremap <Leader>ncc :set colorcolumn-=80<cr>

nnoremap <leader>n :NERDTreeFocus<CR>
nnoremap <C-n> :NERDTree<CR>
nnoremap <C-t> :NERDTreeToggle<CR>
nnoremap <C-f> :NERDTreeFind<CR>

set mouse=a


inoremap { {}<left>
inoremap {{ {
inoremap {} {}
inoremap [ []<left>
inoremap [[ [
inoremap [] []
inoremap ( ()<left>
inoremap (( (
inoremap () ()
inoremap " ""<left>
inoremap "" ""
inoremap ' ''<left>
inoremap '' ''
